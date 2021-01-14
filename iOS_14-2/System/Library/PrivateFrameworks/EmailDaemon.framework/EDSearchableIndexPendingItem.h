/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addItem:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)items;
-(id)initWithItem:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)estimatedSizeInBytes;
-(id<EDIndexableItem>)referenceItem;
-(void)addPendingItem:(id)arg1 ;
-(BOOL)requiresPreprocessing;
@end

