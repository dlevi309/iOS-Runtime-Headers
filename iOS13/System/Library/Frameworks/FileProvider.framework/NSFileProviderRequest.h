/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURL;

@interface NSFileProviderRequest : NSObject <NSSecureCoding> {

	NSUUID* _requestingApplicationIdentifier;
	NSUUID* _requestIdentifier;
	NSURL* _requestingExecutable;

}

@property (nonatomic,retain) NSUUID * requestIdentifier;                            //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * requestingApplicationIdentifier;              //@synthesize requestingApplicationIdentifier=_requestingApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * requestingExecutable;                            //@synthesize requestingExecutable=_requestingExecutable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestIdentifier;
-(NSUUID *)requestingApplicationIdentifier;
-(void)setRequestingApplicationIdentifier:(NSUUID *)arg1 ;
-(NSURL *)requestingExecutable;
-(void)setRequestingExecutable:(NSURL *)arg1 ;
@end

