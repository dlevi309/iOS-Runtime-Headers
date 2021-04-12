/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAMacFilesystemContext : SADomainObject

@property (nonatomic,copy) NSArray * targetEntities; 
+(id)filesystemContext;
+(id)filesystemContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)targetEntities;
-(void)setTargetEntities:(NSArray *)arg1 ;
@end

