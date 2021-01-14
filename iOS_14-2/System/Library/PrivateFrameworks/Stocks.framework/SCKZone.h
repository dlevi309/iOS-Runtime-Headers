/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setStore:(id<SCKZoneStore>)arg1 ;
-(BOOL)isDirty;
-(id<SCKZoneStore>)store;
-(SCKZoneDiff *)clientDiff;
-(NSArray *)clientRecords;
-(BOOL)needsFirstSync;
-(id)initWithSchema:(id)arg1 store:(id)arg2 ;
@end

