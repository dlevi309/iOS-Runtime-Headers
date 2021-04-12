/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@protocol SCKZoneStore;
@class SCKZoneSchema, NSArray, SCKZoneDiff;

@interface SCKZone : NSObject {

	SCKZoneSchema* _schema;
	id<SCKZoneStore> _store;

}

@property (nonatomic,retain) id<SCKZoneStore> store;                       //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) SCKZoneSchema * schema;                     //@synthesize schema=_schema - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientRecords; 
@property (nonatomic,copy,readonly) SCKZoneDiff * clientDiff; 
@property (nonatomic,readonly) BOOL needsFirstSync; 
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
-(SCKZoneSchema *)schema;
-(id<SCKZoneStore>)store;
-(void)setStore:(id<SCKZoneStore>)arg1 ;
-(BOOL)isDirty;
-(SCKZoneDiff *)clientDiff;
-(id)initWithSchema:(id)arg1 store:(id)arg2 ;
-(NSArray *)clientRecords;
-(BOOL)needsFirstSync;
@end

