/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCMagazineGenre : NSObject <NSCopying> {

	NSString* _genre;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSString * genre;                             //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(id)magazineGenreWithGenre:(id)arg1 localizedDescription:(id)arg2 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSString *)genre;
-(id)init;
-(void)setGenre:(NSString *)arg1 ;
-(id)initWithGenre:(id)arg1 localizedDescription:(id)arg2 ;
-(NSString *)localizedDescription;
-(unsigned long long)hash;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

