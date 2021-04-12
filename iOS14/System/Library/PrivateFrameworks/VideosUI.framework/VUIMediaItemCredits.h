/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet;

@interface VUIMediaItemCredits : NSObject <NSCopying> {

	NSOrderedSet* _cast;
	NSOrderedSet* _directors;
	NSOrderedSet* _producers;
	NSOrderedSet* _screenwriters;

}

@property (nonatomic,copy) NSOrderedSet * cast;                       //@synthesize cast=_cast - In the implementation block
@property (nonatomic,copy) NSOrderedSet * directors;                  //@synthesize directors=_directors - In the implementation block
@property (nonatomic,copy) NSOrderedSet * producers;                  //@synthesize producers=_producers - In the implementation block
@property (nonatomic,copy) NSOrderedSet * screenwriters;              //@synthesize screenwriters=_screenwriters - In the implementation block
@property (nonatomic,readonly) BOOL hasCredits; 
+(id)_arrayFromStringRepresentation:(id)arg1 ;
+(id)_stringRepresentationFromArray:(id)arg1 ;
-(id)initWithStringRepresentation:(id)arg1 ;
-(id)stringRepresentation;
-(NSOrderedSet *)cast;
-(id)description;
-(unsigned long long)hash;
-(NSOrderedSet *)directors;
-(void)setDirectors:(NSOrderedSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCast:(NSOrderedSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSOrderedSet *)producers;
-(NSOrderedSet *)screenwriters;
-(void)setProducers:(NSOrderedSet *)arg1 ;
-(void)setScreenwriters:(NSOrderedSet *)arg1 ;
-(BOOL)hasCredits;
@end

