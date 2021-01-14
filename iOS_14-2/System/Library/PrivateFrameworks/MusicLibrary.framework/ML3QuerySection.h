/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@interface ML3QuerySection : NSObject {

	unsigned long long _sectionIndex;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;              //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(void)setRange:(NSRange)arg1 ;
-(NSRange)range;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRange:(NSRange)arg1 sectionIndex:(unsigned long long)arg2 ;
@end

