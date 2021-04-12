/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAbstractItemList.h>

@class SAMPCollection;

@interface SAMPMediaEntityList : SAAbstractItemList

@property (assign,nonatomic) int mediaType; 
@property (nonatomic,retain) SAMPCollection * parentCollection; 
+(id)mediaEntityList;
+(id)mediaEntityListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(id)encodedClassName;
-(SAMPCollection *)parentCollection;
-(void)setParentCollection:(SAMPCollection *)arg1 ;
@end

