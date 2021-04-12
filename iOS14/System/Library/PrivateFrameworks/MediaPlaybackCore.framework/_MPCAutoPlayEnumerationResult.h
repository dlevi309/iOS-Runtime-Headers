/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationItem.h>

@class NSString;

@interface _MPCAutoPlayEnumerationResult : NSObject <MPSectionedIdentifierListEnumerationItem> {

	NSString* _sectionIdentifier;

}

@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (getter=isRemoved,nonatomic,readonly) BOOL removed; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)itemIdentifier;
-(NSString *)sectionIdentifier;
-(BOOL)isRemoved;
-(long long)entryType;
-(id)itemResult;
-(long long)branchDepth;
-(id)trackingEntryResult;
-(id)initWithSectionIdentifier:(id)arg1 ;
@end

