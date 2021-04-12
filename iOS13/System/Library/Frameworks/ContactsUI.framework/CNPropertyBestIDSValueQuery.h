/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNPropertyBestIDSValueQueryDelegate, CNCancelable;
@class NSMutableArray, NSArray, CNPropertyGroupItem;

@interface CNPropertyBestIDSValueQuery : NSObject {

	NSMutableArray* _validIDSItems;
	id<CNPropertyBestIDSValueQueryDelegate> _delegate;
	NSArray* _propertyItems;
	NSArray* _idsHandles;
	id<CNCancelable> _idsLookupToken;
	NSMutableArray* _validIDSHandles;

}

@property (nonatomic,retain) NSArray * propertyItems;                                              //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,retain) NSArray * idsHandles;                                                 //@synthesize idsHandles=_idsHandles - In the implementation block
@property (nonatomic,retain) id<CNCancelable> idsLookupToken;                                      //@synthesize idsLookupToken=_idsLookupToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * validIDSHandles;                                     //@synthesize validIDSHandles=_validIDSHandles - In the implementation block
@property (nonatomic,readonly) NSMutableArray * validIDSItems;                                     //@synthesize validIDSItems=_validIDSItems - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * bestIDSProperty; 
@property (assign,nonatomic,__weak) id<CNPropertyBestIDSValueQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CNPropertyBestIDSValueQueryDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyBestIDSValueQueryDelegate>)arg1 ;
-(void)cancel;
-(NSArray *)propertyItems;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 ;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 idsAvailabilityProvider:(id)arg3 schedulerProvider:(id)arg4 ;
-(CNPropertyGroupItem *)bestIDSProperty;
-(NSMutableArray *)validIDSItems;
-(NSArray *)idsHandles;
-(void)setIdsHandles:(NSArray *)arg1 ;
-(id<CNCancelable>)idsLookupToken;
-(void)setIdsLookupToken:(id<CNCancelable>)arg1 ;
-(NSMutableArray *)validIDSHandles;
-(void)setValidIDSHandles:(NSMutableArray *)arg1 ;
@end

