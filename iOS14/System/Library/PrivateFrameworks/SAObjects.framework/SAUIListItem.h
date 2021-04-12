/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(id<SAAceSerializable>)object;
-(NSArray *)commands;
-(void)setObject:(id<SAAceSerializable>)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setLabelValue:(NSString *)arg1 ;
-(NSString *)selectionResponse;
-(void)setSelectionResponse:(NSString *)arg1 ;
-(NSString *)selectionText;
-(void)setSelectionText:(NSString *)arg1 ;
-(NSString *)speakableSelectionResponse;
-(void)setSpeakableSelectionResponse:(NSString *)arg1 ;
-(void)setImageType:(NSString *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)imageType;
-(NSString *)labelValue;
-(NSString *)label;
-(NSString *)title;
@end

