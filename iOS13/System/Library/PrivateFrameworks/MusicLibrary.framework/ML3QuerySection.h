/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QuerySection : NSObject {

	unsigned long long _sectionIndex;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(id)initWithRange:(NSRange)arg1 sectionIndex:(unsigned long long)arg2 ;
@end

