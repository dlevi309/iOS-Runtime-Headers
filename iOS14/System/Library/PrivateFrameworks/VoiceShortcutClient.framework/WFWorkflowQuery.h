/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFWorkflowQuery : NSObject <NSSecureCoding> {

	BOOL _includeTombstonesAndConflicts;
	unsigned long long _location;
	NSString* _workflowType;
	NSString* _folderIdentifier;
	long long _resultsLimit;

}

@property (nonatomic,readonly) unsigned long long location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * workflowType;                       //@synthesize workflowType=_workflowType - In the implementation block
@property (nonatomic,readonly) NSString * folderIdentifier;                   //@synthesize folderIdentifier=_folderIdentifier - In the implementation block
@property (assign,nonatomic) long long resultsLimit;                          //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL includeTombstonesAndConflicts;              //@synthesize includeTombstonesAndConflicts=_includeTombstonesAndConflicts - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)location;
-(BOOL)includeTombstonesAndConflicts;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)folderIdentifier;
-(id)initWithCollectionIdentifier:(id)arg1 ;
-(id)initWithLocation:(unsigned long long)arg1 ;
-(void)setIncludeTombstonesAndConflicts:(BOOL)arg1 ;
-(id)initWithWorkflowType:(id)arg1 ;
-(void)setResultsLimit:(long long)arg1 ;
-(id)initWithFolderIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)workflowType;
-(long long)resultsLimit;
@end

