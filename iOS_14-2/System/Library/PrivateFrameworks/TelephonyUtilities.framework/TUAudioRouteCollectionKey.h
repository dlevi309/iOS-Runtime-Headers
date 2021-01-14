/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TUAudioRouteCollectionKey : NSObject <NSCopying> {

	NSString* _category;
	NSString* _mode;

}

@property (nonatomic,copy,readonly) NSString * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) NSString * mode;                  //@synthesize mode=_mode - In the implementation block
-(NSString *)mode;
-(NSString *)category;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCategory:(id)arg1 mode:(id)arg2 ;
-(BOOL)isEqualToAudioRouteCollectionKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

