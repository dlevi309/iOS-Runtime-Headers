/*
* Generated on Thursday, January 14, 2021 at 2:27:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


@class NSArray, NSString;

@interface MiroMetadata : NSObject {

	NSArray* _allRanges;
	NSArray* _loudnessRanges;
	NSString* _identifier;

}

@property (retain) NSArray * allRanges;                        //@synthesize allRanges=_allRanges - In the implementation block
@property (readonly) NSArray * loudnessRanges;                 //@synthesize loudnessRanges=_loudnessRanges - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)addRanges:(id)arg1 ;
-(void)setRanges:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSArray *)allRanges;
-(void)removeRangesOfType:(unsigned long long)arg1 ;
-(void)setAllRanges:(NSArray *)arg1 ;
-(NSArray *)loudnessRanges;
-(void)getMetadata;
@end

