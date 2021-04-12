/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)idType;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)impressionId;
-(NSString *)type;
-(NSString *)identifier;
-(NSString *)parentId;
-(NSString *)impressionIndex;
-(NSArray *)orderedOtherKeys;
-(void)setOrderedOtherKeys:(NSArray *)arg1 ;
-(NSDictionary *)mainValues;
-(void)setMainValues:(NSDictionary *)arg1 ;
-(NSDictionary *)otherValues;
-(void)setOtherValues:(NSDictionary *)arg1 ;
@end

