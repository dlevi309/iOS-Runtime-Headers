/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLMovieArtist : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSNumber * ITunesStoreIdentifier; 
-(id)init;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)setArtistName:(NSString *)arg1 ;
-(NSNumber *)ITunesStoreIdentifier;
-(NSString *)artistName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setITunesStoreIdentifier:(NSNumber *)arg1 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMovieArtistDictionary:(id)arg1 ;
-(id)copyMovieArtistDictionary;
@end

