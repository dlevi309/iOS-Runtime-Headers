/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSString, NSURL, NSData;

@interface MPServerObjectDatabaseAsset : NSObject {

	NSString* _identifier;
	NSString* _hashedPersonID;
	long long _flavor;
	NSURL* _url;
	NSData* _miniSINF;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * hashedPersonID;              //@synthesize hashedPersonID=_hashedPersonID - In the implementation block
@property (nonatomic,readonly) long long flavor;                            //@synthesize flavor=_flavor - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSData * miniSINF;                      //@synthesize miniSINF=_miniSINF - In the implementation block
-(NSURL *)url;
-(NSData *)miniSINF;
-(id)description;
-(NSString *)identifier;
-(long long)flavor;
-(NSString *)hashedPersonID;
-(id)initWithIdentifier:(id)arg1 hashedPersonID:(id)arg2 flavor:(long long)arg3 url:(id)arg4 miniSINF:(id)arg5 ;
-(id)initWithSQLRowResult:(id)arg1 ;
@end

