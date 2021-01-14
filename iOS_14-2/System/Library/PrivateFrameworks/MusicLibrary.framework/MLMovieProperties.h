/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSArray, NSString;

@interface MLMovieProperties : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSArray * castMembers; 
@property (nonatomic,copy) NSString * copyrightWarning; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * producers; 
@property (nonatomic,copy) NSArray * screenwriters; 
@property (nonatomic,copy) NSString * studioName; 
-(id)init;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMoviePropertiesDictionary:(id)arg1 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)castMembers;
-(NSString *)copyrightWarning;
-(NSArray *)producers;
-(NSArray *)screenwriters;
-(void)setCastMembers:(NSArray *)arg1 ;
-(void)setCopyrightWarning:(NSString *)arg1 ;
-(void)setProducers:(NSArray *)arg1 ;
-(void)setScreenwriters:(NSArray *)arg1 ;
-(void)setStudioName:(NSString *)arg1 ;
-(NSString *)studioName;
-(id)copyMoviePropertiesDictionary;
@end

