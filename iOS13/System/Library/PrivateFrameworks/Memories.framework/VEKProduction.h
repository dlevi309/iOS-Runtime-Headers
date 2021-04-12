/*
* Generated on Monday, March 1, 2021 at 2:35:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <Memories/VEKPipeline.h>
#import <libobjc.A.dylib/PosterDataProtocol.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PHAssetCollection, NSDate, PHAsset, VEKBlueprint, NSSet, VEKProduction_MiroMemory_Bridge;

@interface VEKProduction : VEKPipeline <PosterDataProtocol, NSSecureCoding, NSCopying> {

	BOOL _isPending;
	PHAssetCollection* _collection;
	double _requestedDuration;
	NSString* _requestedMood;
	NSDate* _memoryViewedDate;
	NSString* _title;
	NSString* _subtitle;
	PHAsset* _keyAsset;
	VEKBlueprint* _blueprint;
	NSSet* _suggestions;
	VEKProduction_MiroMemory_Bridge* _bridge;
	double _maxDuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,retain) VEKProduction_MiroMemory_Bridge * bridge;              //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,retain) NSString * requestedMood;                              //@synthesize requestedMood=_requestedMood - In the implementation block
@property (nonatomic,retain) NSDate * memoryViewedDate;                             //@synthesize memoryViewedDate=_memoryViewedDate - In the implementation block
@property (assign,nonatomic) BOOL isPending;                                        //@synthesize isPending=_isPending - In the implementation block
@property (assign,nonatomic) double maxDuration;                                    //@synthesize maxDuration=_maxDuration - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * collection;                      //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) double requestedDuration;                              //@synthesize requestedDuration=_requestedDuration - In the implementation block
@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) VEKBlueprint * blueprint;                              //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) NSSet * suggestions;                                   //@synthesize suggestions=_suggestions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PHAssetCollection *)collection;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)fontName;
-(NSString *)subtitle;
-(BOOL)isPending;
-(void)setIsPending:(BOOL)arg1 ;
-(NSSet *)suggestions;
-(void)setSuggestions:(NSSet *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(double)maxDuration;
-(void)setMaxDuration:(double)arg1 ;
-(VEKProduction_MiroMemory_Bridge *)bridge;
-(void)setBridge:(VEKProduction_MiroMemory_Bridge *)arg1 ;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(id)initWithAssetCollection:(id)arg1 ;
-(void)setBlueprint:(VEKBlueprint *)arg1 ;
-(VEKBlueprint *)blueprint;
-(double)requestedDuration;
-(void)exportWithPresets:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRequestedDuration:(double)arg1 ;
-(long long)pickedItemCount;
-(NSString *)requestedMood;
-(NSDate *)memoryViewedDate;
-(void)makePlayerItemWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)makeProjectWithProgressHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setRequestedMood:(NSString *)arg1 ;
-(void)setMemoryViewedDate:(NSDate *)arg1 ;
@end

