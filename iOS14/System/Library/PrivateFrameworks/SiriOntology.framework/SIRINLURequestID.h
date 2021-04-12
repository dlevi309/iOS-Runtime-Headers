/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SIRINLURequestID : NSObject <NSSecureCoding> {

	NSString* _idAsString;
	NSString* _connectionID;

}

@property (nonatomic,retain) NSString * idAsString;                //@synthesize idAsString=_idAsString - In the implementation block
@property (nonatomic,retain) NSString * connectionID;              //@synthesize connectionID=_connectionID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)connectionID;
-(void)setConnectionID:(NSString *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)idAsString;
-(id)initWithIdAsString:(id)arg1 connectionID:(id)arg2 ;
-(void)setIdAsString:(NSString *)arg1 ;
@end

