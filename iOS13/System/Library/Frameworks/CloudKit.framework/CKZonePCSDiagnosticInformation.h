/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding> {

	BOOL _wasRepaired;
	int _pcsStatus;
	NSString* _pcsDiagnosticString;
	NSError* _pcsError;

}

@property (assign,nonatomic) BOOL wasRepaired;                            //@synthesize wasRepaired=_wasRepaired - In the implementation block
@property (assign,nonatomic) int pcsStatus;                               //@synthesize pcsStatus=_pcsStatus - In the implementation block
@property (nonatomic,retain) NSString * pcsDiagnosticString;              //@synthesize pcsDiagnosticString=_pcsDiagnosticString - In the implementation block
@property (nonatomic,retain) NSError * pcsError;                          //@synthesize pcsError=_pcsError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)pcsStatus;
-(BOOL)wasRepaired;
-(NSString *)pcsDiagnosticString;
-(NSError *)pcsError;
-(void)setWasRepaired:(BOOL)arg1 ;
-(void)setPcsStatus:(int)arg1 ;
-(void)setPcsDiagnosticString:(NSString *)arg1 ;
-(void)setPcsError:(NSError *)arg1 ;
@end

