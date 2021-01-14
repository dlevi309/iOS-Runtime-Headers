/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/RBSXPCCoding.h>

@class NSArray, NSString;

@interface RBSXPCCodingArray : NSObject <NSFastEnumeration, RBSXPCCoding> {

	NSArray* _array;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RB2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
@end

