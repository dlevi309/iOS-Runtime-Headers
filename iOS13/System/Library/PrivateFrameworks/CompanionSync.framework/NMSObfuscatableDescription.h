/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSString, NSMutableArray;

@interface NMSObfuscatableDescription : NSObject {

	NSString* _prefixString;
	NSMutableArray* _items;

}

@property (nonatomic,retain) NSMutableArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * prefixString;              //@synthesize prefixString=_prefixString - In the implementation block
-(id)init;
-(id)description;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)CPSafeDescription;
-(NSString *)prefixString;
-(id)_descriptionObfuscated:(BOOL)arg1 ;
-(void)addDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)setPrefixString:(NSString *)arg1 ;
@end

