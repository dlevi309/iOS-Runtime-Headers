/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CPLEngineScope : NSObject <NSSecureCoding> {

	NSString* _scopeIdentifier;
	long long _scopeType;
	NSDate* _creationDate;
	long long _localIndex;
	long long _cloudIndex;
	long long _stableIndex;

}

@property (nonatomic,retain) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) long long localIndex;                      //@synthesize localIndex=_localIndex - In the implementation block
@property (assign,nonatomic) long long cloudIndex;                      //@synthesize cloudIndex=_cloudIndex - In the implementation block
@property (assign,nonatomic) long long stableIndex;                     //@synthesize stableIndex=_stableIndex - In the implementation block
@property (nonatomic,readonly) NSString * scopeIdentifier;              //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
@property (nonatomic,readonly) long long scopeType;                     //@synthesize scopeType=_scopeType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)separatorForStatusKey:(id)arg1 ;
+(void)formatStatusDictionary:(id)arg1 forScopeWithIdentifier:(id)arg2 appendString:(/*^block*/id)arg3 appendTopLevelStatus:(/*^block*/id)arg4 appendLineStatus:(/*^block*/id)arg5 ;
-(id)description;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)scopeIdentifier;
-(id)statusDescription;
-(long long)scopeType;
-(id)initWithScopeIdentifier:(id)arg1 scopeType:(long long)arg2 ;
-(long long)localIndex;
-(void)setLocalIndex:(long long)arg1 ;
-(long long)cloudIndex;
-(void)setCloudIndex:(long long)arg1 ;
-(long long)stableIndex;
-(void)setStableIndex:(long long)arg1 ;
@end

