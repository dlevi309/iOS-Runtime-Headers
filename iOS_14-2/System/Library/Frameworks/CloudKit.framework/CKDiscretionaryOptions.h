/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding> {

	BOOL _allowsExpensiveAccess;
	NSString* _applicationBundleIdentifierOverride;
	NSString* _secondarySourceAppplicationBundleId;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;

}

@property (nonatomic,retain) NSString * applicationBundleIdentifierOverride;               //@synthesize applicationBundleIdentifierOverride=_applicationBundleIdentifierOverride - In the implementation block
@property (nonatomic,retain) NSString * secondarySourceAppplicationBundleId;               //@synthesize secondarySourceAppplicationBundleId=_secondarySourceAppplicationBundleId - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                            //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL allowsExpensiveAccess;                                   //@synthesize allowsExpensiveAccess=_allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;              //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)discretionaryNetworkBehavior;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(NSString *)secondarySourceAppplicationBundleId;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(BOOL)allowsExpensiveAccess;
-(NSString *)applicationBundleIdentifierOverride;
-(void)setAllowsExpensiveAccess:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSecondarySourceAppplicationBundleId:(NSString *)arg1 ;
-(double)timeoutIntervalForResource;
-(void)setApplicationBundleIdentifierOverride:(NSString *)arg1 ;
@end

