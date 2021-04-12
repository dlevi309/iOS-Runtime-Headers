/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, PBItemCollection, PBItem, PBItemRepresentation, NSString;

@interface PBDataTransferRequest : NSObject <NSProgressReporting> {

	PBItemCollection* _itemCollection;
	PBItem* _item;
	PBItemRepresentation* _repr;
	NSProgress* _progress;

}

@property (nonatomic,retain) PBItemCollection * itemCollection;              //@synthesize itemCollection=_itemCollection - In the implementation block
@property (nonatomic,retain) PBItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) PBItemRepresentation * repr;                    //@synthesize repr=_repr - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PBItem *)item;
-(void)setItem:(PBItem *)arg1 ;
-(NSProgress *)progress;
-(NSString *)typeIdentifier;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(PBItemCollection *)itemCollection;
-(PBItemRepresentation *)repr;
-(void)setRepr:(PBItemRepresentation *)arg1 ;
@end

