/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerSection : PBCodable <NSCopying> {

	NSString* _footer;
	NSMutableArray* _items;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasFooter; 
@property (nonatomic,retain) NSString * footer;                   //@synthesize footer=_footer - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
+(Class)itemsType;
-(id)dictionaryRepresentation;
-(NSString *)footer;
-(void)setItems:(NSMutableArray *)arg1 ;
-(void)clearItems;
-(BOOL)hasTitle;
-(void)addItems:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(NSMutableArray *)items;
-(id)description;
-(unsigned long long)hash;
-(unsigned long long)itemsCount;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)itemsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFooter;
@end

