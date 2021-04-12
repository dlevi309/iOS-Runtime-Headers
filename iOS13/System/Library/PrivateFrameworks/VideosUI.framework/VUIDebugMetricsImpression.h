/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray, NSDictionary, NSString;

@interface VUIDebugMetricsImpression : NSObject {

	NSArray* _orderedOtherKeys;
	NSDictionary* _mainValues;
	NSDictionary* _otherValues;

}

@property (nonatomic,retain) NSDictionary * mainValues;                 //@synthesize mainValues=_mainValues - In the implementation block
@property (nonatomic,retain) NSDictionary * otherValues;                //@synthesize otherValues=_otherValues - In the implementation block
@property (nonatomic,retain) NSArray * orderedOtherKeys;                //@synthesize orderedOtherKeys=_orderedOtherKeys - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * idType; 
@property (nonatomic,readonly) NSString * impressionId; 
@property (nonatomic,readonly) NSString * impressionIndex; 
@property (nonatomic,readonly) NSString * parentId; 
-(NSString *)name;
-(NSString *)type;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)impressionId;
-(NSString *)parentId;
-(NSString *)idType;
-(NSString *)impressionIndex;
-(NSArray *)orderedOtherKeys;
-(void)setOrderedOtherKeys:(NSArray *)arg1 ;
-(NSDictionary *)mainValues;
-(void)setMainValues:(NSDictionary *)arg1 ;
-(NSDictionary *)otherValues;
-(void)setOtherValues:(NSDictionary *)arg1 ;
@end

