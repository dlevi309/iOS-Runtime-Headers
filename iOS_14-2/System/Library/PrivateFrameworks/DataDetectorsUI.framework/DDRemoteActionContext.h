/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary, NSArray, NSString;

@interface DDRemoteActionContext : NSObject <NSCoding, NSSecureCoding> {

	NSURL* _URL;
	_DDResult* _result;
	NSDictionary* _context;
	NSArray* _associatedResults;
	NSString* _hostApplicationIdentifier;
	NSString* _actionClass;

}

@property (retain) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (assign) _DDResult* result;                               //@synthesize result=_result - In the implementation block
@property (retain) NSDictionary * context;                          //@synthesize context=_context - In the implementation block
@property (retain) NSArray * associatedResults;                     //@synthesize associatedResults=_associatedResults - In the implementation block
@property (retain) NSString * actionClass;                          //@synthesize actionClass=_actionClass - In the implementation block
@property (copy) NSString * hostApplicationIdentifier;              //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isClassAllowedFromString:(id)arg1 ;
-(void)setResult:(_DDResult*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)context;
-(NSURL *)URL;
-(_DDResult*)result;
-(id)initWithCoder:(id)arg1 ;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(void)dealloc;
-(void)setContext:(NSDictionary *)arg1 ;
-(NSArray *)associatedResults;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 associatedResults:(id)arg4 className:(id)arg5 ;
-(void)setActionClass:(NSString *)arg1 ;
-(void)setAssociatedResults:(NSArray *)arg1 ;
-(NSString *)actionClass;
@end

