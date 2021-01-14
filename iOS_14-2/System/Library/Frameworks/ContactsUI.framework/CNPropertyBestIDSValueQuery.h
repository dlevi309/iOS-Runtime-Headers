/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)idsHandles;
-(NSArray *)propertyItems;
-(void)setDelegate:(id<CNPropertyBestIDSValueQueryDelegate>)arg1 ;
-(CNPropertyGroupItem *)bestIDSProperty;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 ;
-(NSMutableArray *)validIDSItems;
-(void)setIdsHandles:(NSArray *)arg1 ;
-(id<CNCancelable>)idsLookupToken;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 idsAvailabilityProvider:(id)arg3 schedulerProvider:(id)arg4 ;
-(void)setIdsLookupToken:(id<CNCancelable>)arg1 ;
-(NSMutableArray *)validIDSHandles;
-(void)setValidIDSHandles:(NSMutableArray *)arg1 ;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(void)cancel;
@end

