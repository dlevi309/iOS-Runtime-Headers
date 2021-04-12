/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <libobjc.A.dylib/BCSParsedDataPrivate.h>

@class NSString;

@interface BCSCalendarEventData : NSObject <BCSParsedDataPrivate> {

	NSString* _icsString;

}

@property (nonatomic,copy,readonly) NSString * icsString;                     //@synthesize icsString=_icsString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * extraPreviewText; 
+(BOOL)supportsSecureCoding;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)icsString;
-(NSString *)extraPreviewText;
-(id)initWithICSString:(id)arg1 ;
@end

