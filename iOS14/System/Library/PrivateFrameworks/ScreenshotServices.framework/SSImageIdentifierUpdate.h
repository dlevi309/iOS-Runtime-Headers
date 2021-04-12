/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/SSLoggable.h>

@class NSString, BSSettings;

@interface SSImageIdentifierUpdate : NSObject <BSXPCCoding, SSLoggable> {

	BOOL _success;
	NSString* _imageIdentifier;
	NSString* _environmentDescriptionIdentifier;

}

@property (nonatomic,copy) NSString * imageIdentifier;                               //@synthesize imageIdentifier=_imageIdentifier - In the implementation block
@property (nonatomic,copy) NSString * environmentDescriptionIdentifier;              //@synthesize environmentDescriptionIdentifier=_environmentDescriptionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL success;                                           //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BSSettings * bsSettings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * loggableDescription; 
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSString *)imageIdentifier;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)loggableDescription;
-(void)setImageIdentifier:(NSString *)arg1 ;
-(NSString *)environmentDescriptionIdentifier;
-(BSSettings *)bsSettings;
-(void)setEnvironmentDescriptionIdentifier:(NSString *)arg1 ;
@end

