/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationResult.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult> {

	long long _entryType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType;                 //@synthesize entryType=_entryType - In the implementation block
+(id)endEntry;
+(id)startEntry;
-(NSString *)description;
-(long long)entryType;
-(id)itemResult;
-(id)trackingEntryResult;
-(long long)branchDepth;
@end

