/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INJSONEncoderConfiguration : NSObject <NSCopying> {

	BOOL _locationIncludesTimestamp;
	NSString* _languageCode;

}

@property (nonatomic,copy) NSString * languageCode;                       //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL locationIncludesTimestamp;              //@synthesize locationIncludesTimestamp=_locationIncludesTimestamp - In the implementation block
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)init;
-(NSString *)languageCode;
-(BOOL)locationIncludesTimestamp;
-(void)setLocationIncludesTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

