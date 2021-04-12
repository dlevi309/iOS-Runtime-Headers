/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding> {

	BOOL _allowsExpensiveAccess;
	NSString* _sourceApplicationBundleId;
	NSString* _secondarySourceAppplicationBundleId;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;

}

@property (nonatomic,retain) NSString * sourceApplicationBundleId;                         //@synthesize sourceApplicationBundleId=_sourceApplicationBundleId - In the implementation block
@property (nonatomic,retain) NSString * secondarySourceAppplicationBundleId;               //@synthesize secondarySourceAppplicationBundleId=_secondarySourceAppplicationBundleId - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                            //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL allowsExpensiveAccess;                                   //@synthesize allowsExpensiveAccess=_allowsExpensiveAccess - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;              //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(double)timeoutIntervalForResource;
-(void)setAllowsExpensiveAccess:(BOOL)arg1 ;
-(NSString *)sourceApplicationBundleId;
-(void)setSourceApplicationBundleId:(NSString *)arg1 ;
-(NSString *)secondarySourceAppplicationBundleId;
-(void)setSecondarySourceAppplicationBundleId:(NSString *)arg1 ;
-(BOOL)allowsExpensiveAccess;
-(unsigned long long)discretionaryNetworkBehavior;
@end

