/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString, NSDictionary, NSArray;

@interface CATResult : NSObject {

	NSString* _catId;
	NSDictionary* _meta;
	NSArray* _speak;
	NSArray* _print;
	NSArray* _dialogId;

}

@property (nonatomic,retain) NSString * catId;                 //@synthesize catId=_catId - In the implementation block
@property (nonatomic,retain) NSDictionary * meta;              //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSArray * speak;                  //@synthesize speak=_speak - In the implementation block
@property (nonatomic,retain) NSArray * print;                  //@synthesize print=_print - In the implementation block
@property (nonatomic,retain) NSArray * dialogId;               //@synthesize dialogId=_dialogId - In the implementation block
-(NSArray *)print;
-(NSArray *)speak;
-(void)setSpeak:(NSArray *)arg1 ;
-(NSArray *)dialogId;
-(void)setDialogId:(NSArray *)arg1 ;
-(void)setPrint:(NSArray *)arg1 ;
-(NSDictionary *)meta;
-(void)setMeta:(NSDictionary *)arg1 ;
-(NSString *)catId;
-(void)setCatId:(NSString *)arg1 ;
@end

