/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {

	BOOL _highPriority;
	BOOL _cancelled;
	CPLResource* _resource;
	NSString* _taskIdentifier;
	unsigned long long _intent;

}

@property (nonatomic,readonly) CPLResource * resource;                             //@synthesize resource=_resource - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier;                     //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,getter=isHighPriority,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) unsigned long long intent;                            //@synthesize intent=_intent - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForIntent:(unsigned long long)arg1 ;
+(BOOL)isHighPriorityForIntent:(unsigned long long)arg1 ;
+(id)intentsToBackgroundDownload;
-(unsigned long long)intent;
-(void)launch;
-(Class)classForKeyedArchiver;
-(void)setResource:(CPLResource *)arg1 ;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)cancelTask;
-(void)setIntent:(unsigned long long)arg1 ;
-(id)description;
-(CPLResource *)resource;
-(Class)classForCoder;
-(NSString *)taskIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isHighPriority;
-(id)initWithResource:(id)arg1 taskIdentifier:(id)arg2 ;
@end

