/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol EDIndexableItem;
@class NSString, NSMutableArray;

@interface EDSearchableIndexPendingItem : NSObject {

	NSString* _identifier;
	NSMutableArray* _items;
	id<EDIndexableItem> _referenceItem;

}

@property (nonatomic,retain) NSMutableArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) id<EDIndexableItem> referenceItem;                    //@synthesize referenceItem=_referenceItem - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,readonly) BOOL requiresPreprocessing; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)addItem:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(unsigned long long)estimatedSizeInBytes;
-(id<EDIndexableItem>)referenceItem;
-(void)addPendingItem:(id)arg1 ;
-(BOOL)requiresPreprocessing;
@end

