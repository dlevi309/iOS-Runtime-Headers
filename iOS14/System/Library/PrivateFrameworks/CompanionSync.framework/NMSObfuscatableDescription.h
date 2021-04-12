/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/


@class NSString, NSMutableArray;

@interface NMSObfuscatableDescription : NSObject {

	NSString* _prefixString;
	NSMutableArray* _items;

}

@property (nonatomic,retain) NSMutableArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * prefixString;              //@synthesize prefixString=_prefixString - In the implementation block
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableArray *)items;
-(id)description;
-(id)CPSafeDescription;
-(NSString *)prefixString;
-(id)_descriptionObfuscated:(BOOL)arg1 ;
-(void)addDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)setPrefixString:(NSString *)arg1 ;
@end

