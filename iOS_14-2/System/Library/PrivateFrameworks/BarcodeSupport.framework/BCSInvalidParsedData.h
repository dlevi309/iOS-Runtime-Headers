/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class NSString;

@interface BCSInvalidParsedData : NSObject <BCSParsedDataPrivate> {

	long long _invalidDataType;
	NSString* _invalidContents;
	NSString* _invalidURLScheme;

}

@property (nonatomic,readonly) long long invalidDataType;                     //@synthesize invalidDataType=_invalidDataType - In the implementation block
@property (nonatomic,copy) NSString * invalidContents;                        //@synthesize invalidContents=_invalidContents - In the implementation block
@property (nonatomic,copy) NSString * invalidURLScheme;                       //@synthesize invalidURLScheme=_invalidURLScheme - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extraPreviewText;
-(long long)invalidDataType;
-(id)initWithInvalidDataType:(long long)arg1 invalidContents:(id)arg2 ;
-(void)setInvalidURLScheme:(NSString *)arg1 ;
-(void)setInvalidContents:(NSString *)arg1 ;
-(NSString *)invalidContents;
-(NSString *)invalidURLScheme;
@end

