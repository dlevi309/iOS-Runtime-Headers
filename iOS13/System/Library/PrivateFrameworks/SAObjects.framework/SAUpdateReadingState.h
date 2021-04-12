/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * items; 
@property (nonatomic,copy) NSString * readingStateId; 
@property (assign,nonatomic) long long updatedGroupIndex; 
@property (assign,nonatomic) long long updatedItemIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateReadingState;
+(id)updateReadingStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)readingStateId;
-(void)setReadingStateId:(NSString *)arg1 ;
-(long long)updatedGroupIndex;
-(void)setUpdatedGroupIndex:(long long)arg1 ;
-(long long)updatedItemIndex;
-(void)setUpdatedItemIndex:(long long)arg1 ;
@end

