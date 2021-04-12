/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFPBCodable.h>

@class NSString;

@interface WFRemoteExecutionRequest : NSObject <WFPBCodable> {

	long long _minimumSupportedVersion;
	NSString* _identifier;
	long long _version;

}

@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long minimumSupportedVersion;              //@synthesize minimumSupportedVersion=_minimumSupportedVersion - In the implementation block
@property (nonatomic,readonly) long long version;                              //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)version;
+(BOOL)supportsVersion:(long long)arg1 ;
+(id)unsupportedVersionError;
+(id)identifierFromData:(id)arg1 error:(id*)arg2 ;
+(BOOL)isUnsupportedVersionError:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(long long)minimumSupportedVersion;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)version;
-(BOOL)writeTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)readFrom:(id)arg1 error:(id*)arg2 ;
-(BOOL)readMessageFromData:(id)arg1 error:(id*)arg2 ;
-(id)writeMessageToWriter:(id)arg1 error:(id*)arg2 ;
-(id)emptyProtobufError;
@end

