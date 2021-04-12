/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)requestIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)requestingApplicationIdentifier;
-(void)setRequestingApplicationIdentifier:(NSUUID *)arg1 ;
-(NSURL *)requestingExecutable;
-(void)setRequestingExecutable:(NSURL *)arg1 ;
@end

