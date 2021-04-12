/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setRanges:(id)arg1 ;
-(void)addRanges:(id)arg1 ;
-(NSArray *)allRanges;
-(void)removeRangesOfType:(unsigned long long)arg1 ;
-(void)setAllRanges:(NSArray *)arg1 ;
-(NSArray *)loudnessRanges;
-(void)getMetadata;
@end

