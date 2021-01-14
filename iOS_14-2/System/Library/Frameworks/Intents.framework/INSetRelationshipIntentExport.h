/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INModifyRelationship;


@protocol INSetRelationshipIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * contactIdentifiers; 
@property (nonatomic,copy) INModifyRelationship * targetRelationship; 
@required
-(id)init;
-(INModifyRelationship *)targetRelationship;
-(void)setTargetRelationship:(id)arg1;
-(NSArray *)contactIdentifiers;
-(void)setContactIdentifiers:(id)arg1;

@end

