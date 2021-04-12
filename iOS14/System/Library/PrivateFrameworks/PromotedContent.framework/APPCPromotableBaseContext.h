/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

@class NSUUID, NSArray, NSString;


@protocol APPCPromotableBaseContext
@property (readonly,nonatomic) NSUUID * identifier; 
@property (readonly,nonatomic) CGSize maxSize; 
@property (readonly,nonatomic) id<APPCPromotableContentDepiction> current; 
@property (readonly,nonatomic) NSArray * next; 
@property (readonly,nonatomic) NSArray * adjacent; 
@property (readonly,nonatomic) NSString * requestedAd; 
@required
-(NSArray *)next;
-(id<APPCPromotableContentDepiction>)current;
-(CGSize)maxSize;
-(NSUUID *)identifier;
-(NSArray *)adjacent;
-(NSString *)requestedAd;

@end

