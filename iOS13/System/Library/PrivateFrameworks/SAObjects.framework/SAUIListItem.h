/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAUIListItem : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * imageType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * labelValue; 
@property (nonatomic,retain) id<SAAceSerializable> object; 
@property (nonatomic,copy) NSString * selectionResponse; 
@property (nonatomic,copy) NSString * selectionText; 
@property (nonatomic,copy) NSString * speakableSelectionResponse; 
@property (nonatomic,copy) NSString * title; 
+(id)listItem;
+(id)listItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceSerializable>)object;
-(void)setObject:(id<SAAceSerializable>)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setImageType:(NSString *)arg1 ;
-(NSString *)imageType;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)labelValue;
-(void)setLabelValue:(NSString *)arg1 ;
-(NSString *)selectionResponse;
-(void)setSelectionResponse:(NSString *)arg1 ;
-(NSString *)selectionText;
-(void)setSelectionText:(NSString *)arg1 ;
-(NSString *)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(NSString *)arg1 ;
@end

