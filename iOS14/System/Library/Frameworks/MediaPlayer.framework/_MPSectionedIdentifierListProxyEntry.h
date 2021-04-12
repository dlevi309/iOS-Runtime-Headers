/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationResult.h>

@class NSString;

@interface _MPSectionedIdentifierListProxyEntry : NSObject <MPSectionedIdentifierListEnumerationResult> {

	long long _entryType;

}

@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType;                 //@synthesize entryType=_entryType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)endEntry;
+(id)startEntry;
-(NSString *)description;
-(long long)entryType;
-(id)itemResult;
-(long long)branchDepth;
-(id)trackingEntryResult;
@end

