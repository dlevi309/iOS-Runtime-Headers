/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
*/

#import <Symbolication/VMUCallTreeNode.h>

@class NSCountedSet, NSString;

@interface VMUCallTreeLeafNode : VMUCallTreeNode {

	NSCountedSet* _addresses;
	NSString* _combinedName;

}
-(id)init;
-(id)initWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned)arg3 numBytes:(unsigned long long)arg4 ;
-(void)getBrowserName:(id)arg1 ;
-(void)addAddress:(unsigned long long)arg1 ;
@end

