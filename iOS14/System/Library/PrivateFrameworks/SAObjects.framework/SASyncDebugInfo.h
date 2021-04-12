/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SASyncAnchor, NSString;

@interface SASyncDebugInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * objectIds; 
@property (nonatomic,retain) SASyncAnchor * syncAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)debugInfoWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)debugInfo;
-(id)groupIdentifier;
-(SASyncAnchor *)syncAnchor;
-(id)encodedClassName;
-(void)setSyncAnchor:(SASyncAnchor *)arg1 ;
-(NSArray *)objectIds;
-(void)setObjectIds:(NSArray *)arg1 ;
@end

