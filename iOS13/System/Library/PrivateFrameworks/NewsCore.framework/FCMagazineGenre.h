/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)genre;
-(void)setGenre:(NSString *)arg1 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithGenre:(id)arg1 localizedDescription:(id)arg2 ;
@end

