/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isActive;
-(NSString *)localizedTitle;
-(NSArray *)stations;
-(id)_copyWithRecentStationsGroupClass:(Class)arg1 ;
@end

