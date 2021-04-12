/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMediaType:(int)arg1 ;
-(int)mediaType;
-(id)encodedClassName;
-(SAMPCollection *)parentCollection;
-(void)setParentCollection:(SAMPCollection *)arg1 ;
@end

