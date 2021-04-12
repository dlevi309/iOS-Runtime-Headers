/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CPLResource;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {

	BOOL _highPriority;
	BOOL _cancelled;
	NSString* _taskIdentifier;
	CPLResource* _resource;

}

@property (nonatomic,copy) NSString * taskIdentifier;                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,retain) CPLResource * resource;                               //@synthesize resource=_resource - In the implementation block
@property (assign,getter=isHighPriority,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(Class)classForKeyedArchiver;
-(BOOL)isCancelled;
-(void)launch;
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(BOOL)isHighPriority;
-(CPLResource *)resource;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)cancelTask;
-(void)setResource:(CPLResource *)arg1 ;
@end

