/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL;

@interface SHMediaItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _fuzzyRepresentation;
	NSDictionary* _resultDictionary;

}

@property (nonatomic,readonly) NSDictionary * resultDictionary;                  //@synthesize resultDictionary=_resultDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * fuzzyRepresentation;              //@synthesize fuzzyRepresentation=_fuzzyRepresentation - In the implementation block
@property (nonatomic,copy,readonly) NSString * ID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * artist; 
@property (nonatomic,copy,readonly) NSString * appleMusicID; 
@property (nonatomic,copy,readonly) NSString * lyricsSnippet; 
@property (nonatomic,copy,readonly) NSString * staticLyrics; 
@property (nonatomic,copy,readonly) NSString * genre; 
@property (nonatomic,readonly) NSURL * webURL; 
@property (nonatomic,readonly) NSURL * artworkURL; 
@property (nonatomic,readonly) NSURL * videoURL; 
@property (nonatomic,readonly) NSURL * appleMusicURL; 
@property (nonatomic,readonly) BOOL explicitContent; 
+(BOOL)supportsSecureCoding;
+(id)mediaItemWithResultDictionary:(id)arg1 ;
-(NSURL *)webURL;
-(NSString *)ID;
-(NSString *)genre;
-(NSURL *)artworkURL;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)artist;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)videoURL;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)explicitContent;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)initWithResultDictionary:(id)arg1 ;
-(NSDictionary *)resultDictionary;
-(NSURL *)appleMusicURL;
-(NSString *)appleMusicID;
-(NSString *)lyricsSnippet;
-(NSString *)staticLyrics;
-(NSString *)fuzzyRepresentation;
@end

