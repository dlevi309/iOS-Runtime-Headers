/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSError;

@interface RPFileTransferProgress : NSObject <NSSecureCoding> {

	int _linkType;
	int _type;
	double _bytesPerSecond;
	double _remainingSeconds;
	double _compressionRate;
	NSString* _currentFilename;
	NSError* _error;
	long long _transferredByteCount;
	long long _totalByteCount;
	long long _transferredFileCount;
	long long _totalFileCount;

}

@property (assign,nonatomic) double bytesPerSecond;                       //@synthesize bytesPerSecond=_bytesPerSecond - In the implementation block
@property (assign,nonatomic) double remainingSeconds;                     //@synthesize remainingSeconds=_remainingSeconds - In the implementation block
@property (assign,nonatomic) double compressionRate;                      //@synthesize compressionRate=_compressionRate - In the implementation block
@property (nonatomic,copy) NSString * currentFilename;                    //@synthesize currentFilename=_currentFilename - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) int linkType;                                //@synthesize linkType=_linkType - In the implementation block
@property (assign,nonatomic) long long transferredByteCount;              //@synthesize transferredByteCount=_transferredByteCount - In the implementation block
@property (assign,nonatomic) long long totalByteCount;                    //@synthesize totalByteCount=_totalByteCount - In the implementation block
@property (assign,nonatomic) long long transferredFileCount;              //@synthesize transferredFileCount=_transferredFileCount - In the implementation block
@property (assign,nonatomic) long long totalFileCount;                    //@synthesize totalFileCount=_totalFileCount - In the implementation block
@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setTotalByteCount:(long long)arg1 ;
-(void)setTotalFileCount:(long long)arg1 ;
-(long long)totalByteCount;
-(void)setLinkType:(int)arg1 ;
-(long long)totalFileCount;
-(int)linkType;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)description;
-(int)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setCompressionRate:(double)arg1 ;
-(double)compressionRate;
-(void)setBytesPerSecond:(double)arg1 ;
-(void)setRemainingSeconds:(double)arg1 ;
-(void)setCurrentFilename:(NSString *)arg1 ;
-(void)setTransferredByteCount:(long long)arg1 ;
-(void)setTransferredFileCount:(long long)arg1 ;
-(double)bytesPerSecond;
-(double)remainingSeconds;
-(NSString *)currentFilename;
-(long long)transferredByteCount;
-(long long)transferredFileCount;
@end

