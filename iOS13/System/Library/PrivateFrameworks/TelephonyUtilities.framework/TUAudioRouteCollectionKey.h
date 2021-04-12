/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(NSString *)mode;
-(BOOL)isEqualToAudioRouteCollectionKey:(id)arg1 ;
-(id)initWithCategory:(id)arg1 mode:(id)arg2 ;
@end

