/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying> {

	BOOL _active;
	NSString* _localizedTitle;
	NSArray* _stations;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                 //@synthesize active=_active - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;              //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stations;                     //@synthesize stations=_stations - In the implementation block
-(NSString *)localizedTitle;
-(BOOL)isActive;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)stations;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_copyWithRecentStationsGroupClass:(Class)arg1 ;
@end

